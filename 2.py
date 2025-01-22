import matplotlib.pyplot as plt

def plot_alternating_corresponding_angles(angles1, angles2):
    if len(angles1) != len(angles2) or len(angles1) % 2 != 0:
        return "Error: Lists must be of equal length and even"
    
    fig, ax = plt.subplots(figsize=(8, 6))
    ax.set_title('Alternating Corresponding Angles')
    ax.set_xlabel('Angle Index')
    ax.set_ylabel('Angle Value')
    
    for i in range(len(angles1)):
        if i % 2 == 0:
            ax.plot([i, i], [0, angles1[i]], color='blue', linestyle='-')
        else:
            ax.plot([i, i], [0, angles2[i]], color='red', linestyle='-')

    ax.scatter(range(len(angles1)), angles1, color='blue', label='Angles 1')
    ax.scatter(range(len(angles2)), angles2, color='red', label='Angles 2')
    ax.legend()
    plt.show()

# Example usage:
angles1 = [30, 60, 45, 90, 20, 70, 35, 80, 10, 50, 25, 75, 15, 55, 40, 85]
angles2 = [60, 120, 30, 90, 50, 100, 70, 130, 40, 80, 10, 60, 30, 90, 20, 70]
plot_alternating_corresponding_angles(angles1, angles2)
