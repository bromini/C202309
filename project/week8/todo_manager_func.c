#include <stdio.h>
#define MAX_TASKS 10
#define CHAR_NUM 100
#include <string.h>

char tasks[MAX_TASKS][CHAR_NUM] = { "" }; // �� �� ����� �����ϱ� ���� 2���� �迭
int taskCount = 0; // �� ���� ���� �����ϱ� ���� ����

void addTask(char task[]) {
    // �� ���� �Է¹ް� �迭�� ����
    printf("�� ���� �Է��ϼ��� (���� ���� �Է��ϼ���): ");
    scanf_s("%s", task, (int)sizeof(task));
    strcpy_s(tasks[taskCount], sizeof(tasks[taskCount]), task);
    printf("�� �� ""%s""�� ����Ǿ����ϴ�\n\n", task);
}

void delTask(int delIndex, int taskCount) {
    // Ư�� �ε����� �� �� ���� �� �ڿ� �ִ� �� �� ������ �ű��
    printf("%d. %s : �� ���� �����մϴ�.\n", delIndex, tasks[delIndex - 1]);
    for (int i = delIndex; i < taskCount + 1; i++) {
        strcpy_s(tasks[i - 1], sizeof(tasks[i]), tasks[i]);
    }
}

void printTask(int taskCount) {
    // ���� �� �� ����� ���
    for (int i = 0; i < taskCount; i++) {
        printf("%d. %s \n", i + 1, tasks[i]);
    }
    printf("\n");
}

int main() {
    // �޴� �� �� �� ���� ���α׷��� �ֿ� ���
    printf("TODO ����Ʈ ����! \n");

    while (1) {
        int choice = -1; // ����� �Է� �޴��� �����ϱ� ���� ����

        // ����ڿ��� �޴��� ����ϰ�, �޴��� �Է¹ޱ�
        printf("------------------\n");
        printf("�޴��� �Է����ּ���.\n");
        printf("1. �� �� �߰�\n2. �� �� ����\n3. ��� ����\n4. ����\n5. �� �� ����\n");
        printf("���� �� �� �� = %d\n", taskCount);
        printf("------------------\n");
        scanf_s("%d", &choice);

        int terminate = 0;
        int delIndex = -1; // �� �� ������ ���� �ε���

        int modifyIndex = -1; // �� �� ������ ���� �ε���
        char ch;

        // �Է¿� ���� ��� ����
        switch (choice) {
        case 1:
            // ����ڰ� 1�� �����ϸ�, �� �� �߰� ����� ����
            addTask(tasks[taskCount]);
            taskCount++;
            break;

        case 2:
            // ����ڰ� 2�� �����ϸ�, �� �� ���� ����� ����
            printf("������ �� ���� ��ȣ�� �Է����ּ���. (1���� ����):");
            scanf_s("%d", &delIndex);
            if (delIndex > taskCount || delIndex <= 0) {
                printf("���� ������ ������ϴ�.\n");
            }
            else {
                delTask(delIndex, taskCount);
                taskCount -= 1;
            }
            break;

        case 3:
            // ����ڰ� 3�� �����ϸ�, �� �� ����� ����ϴ� ����� ����
            printf("�� �� ���\n");
            printTask(taskCount);
            break;

        case 4:
            // ����ڰ� 4�� �����ϸ�, ���α׷��� ����
            terminate = 1;
            break;

        case 5:
            // ����ڰ� 5�� �����ϸ�, �� �� ���� ����� ����
            printf("������ �� ���� ��ȣ�� �Է����ּ���. (1���� ����): ");
            scanf_s("%d", &modifyIndex);
            ch = getchar();
            printf("���ο� �� ���� �Է����ּ���");
            scanf_s("%s", tasks[modifyIndex - 1], (int)sizeof(tasks[modifyIndex - 1]));
            printf("���ο� �� ���� �߰��Ǿ����ϴ�: %d. %s\n", modifyIndex, tasks[modifyIndex - 1]);
            break;

        default:
            // �� ���� ���, �߸��� �������� �˸��� �ٽ� �����ϵ��� �ȳ�
            printf("�߸��� �����Դϴ�. �ٽ� �����ϼ���.\n");
        }

        if (terminate == 1) {
            printf("���Ḧ �����ϼ̽��ϴ�. ���α׷��� �����մϴ�.\n");
            break;
        }
        if (taskCount == 10) {
            printf("�� ���� %d���� �� á���ϴ�.", taskCount);
            break;
        }
    }
    return 0;
}
